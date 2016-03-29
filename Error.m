function [J] = Error( R, kd, tnpbsa, mfiAdjMean, v, biCoefMat )

%   R is a seven-dimensional vector whose first six elements are
%   expression levels of FcgRIA, FcgRIIA-Arg, etc. and whose seventh
%   element is kx (see RegressionAndResiduals.m). kd is a 6 X 4
%   matrix whose elements represent the Kd values associated with each
%   flavor of immunoglobulin per flavor of receptor. tnpbsa is derived in
%   loadData.m, as is mfiAdjMean; v is the valency of the TNP-X-BSA.
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

    %Create a matrix of coefficients of the form:
    %v!/((v-i)!*i!)*10^(kx+i-1)*tnpbsa
    %for all i from 1 to v for all v from 1 to 10, using the value of kx at
    %which the model outputs a minimum error
    CoefMat = biCoefMat;
    for j = 1:10
        for k = 1:10
            CoefMat(j,k) = biCoefMat(j,k) * 10^(R(7)+j-1)*tnpbsa;
        end
    end

    %Sum up squared errors
    temp1 = zeros(1,24);
    for j = 1:6
        for k = 1:4
            temp1(4*(j-1)+k) = Bound(R(j),kd(j,k),tnpbsa,v,CoefMat);
        end
    end
    temp2 = [temp1;temp1;temp1;temp1]';
    error = (temp2 - mfiAdjMean).^2;
        
    J = nansum(nansum(error));
end