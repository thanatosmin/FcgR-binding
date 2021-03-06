## Model

### Base model

TNP-BSA equilibrium binding to FcγRs was modeled using a two-parameter equilibrium model of multivalent ligands binding to monovalent receptors expressed uniformly on a cell surface [@Stone:2001fm; @Perelson:1980fs]. This model assumes that the IC effectively presents a single kind of epitope and that the cell expresses exactly one receptor species that recognizes the epitope. The model also assumes an excess of ligand, such that ligand concentration is effectively constant. Within the model, the initial binding of an IC to the cell is assumed to occur according to a monovalent binding interaction governed by the individual binding site association constant $K_a$. Once a ligand is bound to the cell surface by one receptor, all subsequent binding occurs through crosslinking events with equilibrium partitioning $K_x$, in which an unbound epitope on the ligand binds to a free receptor on the cell surface. $K_x$ serves as the association constant for all crosslinking interactions. According to the model, the number of ligands bound $i$-valently to the cell at equilibrium, $v_{i,eq}$, can be found using the relation

$$ v_{i,eq} = {f\choose i} (K_x)^{i-1} {L_0}{K_a} \left(R_{eq}\right)^i. $$ {#eq:vieq}

Here, $f$ is the effective avidity of the ligands, $K_x$ is a crosslinking parameter with units of # per cell, $L_0$ is the ligand concentration, and $R_{eq}$ is the number of unbound receptors per cell at equilibrium. Consequently, the total number of ligands bound at equilibrium is

$$ L_{bound} = \sum_{i=1}^{f} v_{i,eq} = \sum_{i=1}^{f} { f\choose i } (K_x)^{i-1} {L_0}{K_a} (R_{eq})^i. $$ {#eq:lbound}

$R_{eq}$ changes as a function of $f$, $L_0$, $K_a$, $K_x$, and $R_{tot}$, the total number of receptors expressed on the cell surface. It can be solved for numerically using the relationship

$$ R_{tot} = R_{eq} \left(1+f {L_0}{K_a} (1+K_x R_{eq})^{f-1}\right) $$ {#eq:rtot}

when these parameters are known. As a consequence of [@eq:vieq], the number of receptors that are clustered with at least one other receptor at equilibrium ($R_{multi}$) is equal to

$$ R_{multi} = \sum_{i=2}^{f} iv_{i,eq}. $$ {#eq:rmulti}

### Specification for $K_x$

We represented $K_x$ for any given crosslinking interaction as the product of $K_a$, the affinity of the epitope being bound for the receptor species to which it binds, and a crosslinking coefficient, $K_x^*$, that is uniform for all combinations of FcγR and IgG. For any given crosslinking interaction between an epitope-receptor pair with affinity $K_a$, $K_x = K_x^* K_a$. As a consequence of this construction, $K_x$ becomes zero in the absence of binding and satisfies detailed balance.

### Parameters and assumptions

Association constants for all combinations of hIgG and hFcγR were obtained from previous experimental measurements [@Bruhns:2009kg]. In each replicate of the binding assay, cells were coincubated with 5 µg/ml TNP-4-BSA or TNP-26-BSA. Because the molar masses of 2,4,6-trinitrophenyl groups and of BSA are approximately 173 Da and 66 kDa, respectively, we represented the molar concentrations of TNP-4-BSA and TNP-26-BSA as 74 nM and 70 nM [@Lux:2013iv]. We also assumed that there were two different conversion factors for TNP-4-BSA and TNP-26-BSA between the number of ICs bound and the MFIs measured in the assay, due to IC detection occuring through TNP quantitation. Lastly, we assumed that, due to steric effects, the effective and average valence of TNP-4-BSA and (especially) TNP-26-BSA might be different. This required us to fit the following eleven parameters: the total expression level $R_{tot}$ for each hFcγR, $K_x^*$, conversion factors from ligands bound to MFI measured for both TNP-BSAs, and effective valencies for both TNP-BSAs ($f_{4}$ and $f_{26}$, respectively). We specified a prior distribution for each ligand effective valency equal to a Poisson distribution with rate parameter equal to the average valency. Each other parameter was specified with an unbounded, log-uniform prior.

### Model fitting and deviation parameters

The likelihood for each combination of predicted values for $K_x^*$, the two conversion factors, $f_4$, and $f_{26}$ for each hFcγR-hIgG-TNP-BSA combination was calculated by comparison of our experimental data to a normal distribution with mean equal to our model's predicted binding and standard deviation equal to the predicted binding times a fit standard deviation parameter $\sigma_1^*$.

In addition to IC binding, the receptor expression of each cell line was quantitatively measured. We assumed that the receptor expression measurements were log-normally distributed, with the standard deviation of the log-normal distribution being proportional to the common logarithm of the actual expression. We fit a second standard deviation parameter, $\sigma_2^*$, such that the likelihood of each receptor measurement was calculated using a normal distribution with mean equal to the common logarithm of the predicted receptor expression and standard deviation equal to $\sigma_2^*$. The overall likelihood of the model at each parameter set was calculated as the product of all individual likelihoods. The prior for each fitted parameter was specified to be log-uniform and unbounded.

We fit our model to binding measurements for each hFcγR-hIgG pair using an affine invariant Markov chain Monte Carlo sampler as implemented within the `emcee` package [@ForemanMackey:2013ux]. We assayed the convergence of the Markov chain using the Geweke diagnostic and chain autocorrelation [@Geweke:1991tk]. The Geweke diagnostic was used to determine whether early and late segments of the Markov chain could have been sampled from the same probability distribution. Each walker's series of values for a particular parameter was treated as a single chain, upon which the diagnostic was evaluated.

### Generalized Multi-Receptor Model

To account for cells expressing multiple FcγRs, we extended the model to account for binding in the presence of multiple receptors. At each crosslinking step, $K_x$ must be proportional to the $K_a$ of the corresponding monovalent epitope-receptor interaction to satisfy detailed balance. For any cell expressing $N$ distinct receptor species that all bind the same epitope, let $R_{tot,i}$ be the total number of receptors $i$ per cell expressed on the cell surface, and let $K_{a,i}$ be the affinity of receptor $i$ for the epitope. Let IC, ligands, and $K_x^*$ be as previously described (see Base Model). For all $i$ in $\{1,2,\ldots,N\}$, let $\phi_i = K_x^*K_{a,i}R_{eq,i}$, where $R_{eq,i}$ is the number of receptors $i$ per cell unbound at equilibrium. The individual IC-receptor interactions of an IC, with effective avidity $f$, bound to $q_i$ receptors $i$, $q_j$ receptors $j$, etc. (per cell) can be represented by the vector $\mathbf{q}=(q_1,q_2,\ldots,q_{N+1})$, where $q_{N+1}$ is equal to the number of unbound epitope on the IC. For any such vector describing the binding state of an IC-receptor complex, the number of ICs bound in such a way at equilibrium is equal to

$$v_{\mathbf{q},eq} = {f\choose\mathbf{q}}\frac{L_0}{K_x^*}\prod_{i=1}^N(\phi_i)^{q_i},\label{vq}$$

where ${f\choose\mathbf{q}}$ represents the multinomial coefficient ${f\choose q_1,q_2,\ldots,q_{N+1}}$. Therefore, for all receptors $i$, we have that $R_{eq,i}$ satisfies the relation

$$R_{tot,i} = R_{eq,i}+\sum_{\mathbf{q}\in\mathbf{Q}_{f,N}}{f\choose\mathbf{q}}\frac{L_0}{K_x^*}(\phi_i)^{q_i},$$

where

$$\mathbf{Q}_{f,N} \equiv \{(q_1,q_2,\ldots,q_N,f-\sum_{i=1}^Nq_i)\in\mathbb{N}^{N+1}\mid\sum_{i=1}^Nq_i\leq f\}.$$

For our analysis, $R_{eq,i}$ was solved for for all $i$ by iterative root-finding using this relation, utilizing the Brent routine (`scipy.optimize.brenth`). Consequently, the total number of ligands bound at equilibrium is

$$L_{bound} = \sum_{\mathbf{q}\in\mathbf{Q}_{f,N}}v_{\mathbf{q},eq}.$$

The number of receptor $i$ that are multimerized at equilibrium can be calculated as

$$R_{multi,i}=\sum_{\mathbf{q}\in\mathbf{Q}_{f,N}^*}\lvert \mathbf{q} \rvert v_{\mathbf{q},eq}\label{donkey},$$
where $\lvert \mathbf{q} \rvert=\sum_{i=1}^Nq_i$ and

$$\mathbf{Q}_{f,N}^*\equiv\{(q_1,q_2,\ldots,q_N,f-\sum_{i=1}^Nq_i)\in\mathbb{N}^{N+1}\mid2\leq\sum_{i=1}^Nq_i\leq f\}.$$

### Activity Index

To account for the combined effects of activating, inhibitory, and decoy receptors, we defined an activity index. To do so, we defined the activity index as being the dot product of the vector $v$, or number of multimerized receptors of each receptor species, and $w$, the activity of each receptor species. Activating receptors were given an activity of 1, decoy receptors 0, and inhibitory receptors -1. Multimerization states that resulted in activities of less than 0 were set to 0. This definition satisfied our expectations that activity increases with a greater number of activating receptors, decreases with more inhibitory receptors, and does not change with variation in the number of decoy receptors.
