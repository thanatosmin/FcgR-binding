## An IgG-FcγR binding model deconvolves *in vivo* function

![**An IgG-FcγR binding model deconvolves *in vivo* function.** A) Schematic of earlier IgG class experiments and our approach. B) Efficacy of individual IgG interventions versus the "A/I" ratio of each IgG constant region. C) Predicted versus regressed effect for IgG interventions upon FcγR knockout using the maximal activating FcγR affinity and inhibitory FcγR affinity. D) Principal components analysis of the relevant affinities within each condition of IgG treatment along with FcgR knockout. E) Individual quantities calculated for each intervention from a multivalent binding model. Each quantity is scaled according to the weighting applied by the fitted regression model. F) Predicted versus observed effect using multivalent binding model predicted activity. G) Leave-one-out model variance explained with individual input components removed. H) Fraction of efficacy attributable to NK cell function within each intervention. I) Predicted effect on response of modulating antigen avidity or individual receptor affinities.](./Figures/Figure4.svg){#fig:InVivoResults}

We wished to explore whether a multivalent binding model can enable one to reverse engineer effector function *in vivo*. We surmised that our modeling approach would allow one to convert interventions using defined IgG subclasses into predictions regarding the relevant IgG-FcγR pair and/or cell populations driving response. Prior studies investigating treatments for HIV, cancer, and autoimmune dysfunction [@Nimmerjahn:2005hu] have utilized antibodies with constant antigen binding while varying other parameters of FcγR engagement to show the importance of effector function in response to these treatments (CITE). One finding from these studies is that the relative affinity to each FcγR is important to the resulting response. However, we hypothesized that a more exact model of FcγR engagement would more robustly predict effector response ([@Fig:InVivoResults]A).

To study *in vivo* effector response, we focused on the manipulations made in one study, wherein antibodies against the B16F10 melanoma antigen TRP1 (TA99) were applied to block lung metastasis in C57BL/6 mice. Using a panel of antibodies with differing constant region revealed that an "A/I" ratio predicted response ([@Fig:InVivoResults]B). However, we noted that IgG2b showed divergence from the strong relationship observed for the other antibody constructs. To study this panel of interventions further, we included a number of FcγR knockout or blocking manipulations by assuming the affinity of the receptor would be zero (SUPP TABLE). The "A/I" ratio cannot exist in the absence of an inhibitory receptor and so we regressed the log-transformed maximal activating affinity and inhibitory receptor affinity including knockout receptor conditions to see whether this information could predict response in the broader panel ([@Fig:InVivoResults]C). The "A" and "I" quantities, even when separated, poorly predicted response in this larger panel, suggesting that other information is required to predict response within a wider panel of perturbations.

Examining the affinities present with each intervention emphasized that each antibody treatment differs in a multivariate way ([@Fig:InVivoResults]D). We hypothesized that, although the "A/I" ratio captures the dominant variation for smaller changes in antibody binding, this other variation becomes important for more divergent interventions. Among different immune cell populations, two dominant patterns of FcγR expression are generally found: FcγRIII expression alone as observed in NK cells, and expression of FcγRI, FcγRIIB, FcγRIII and FcγRIV coordinately in other cell populations. We applied our binding model to simulate each of these two populations, assuming a set avidity and ligand concentration ([@Fig:InVivoResults]E). (Choice of avidity and ligand concentration did not affect the results (Fig. XXXXXX).) We assumed that knockout of the inhibitory receptor FcγRIIB likely has some effect on changing the baseline of response, since dendritic cells and other immune populations show a baseline level of activation without this receptor (CITE). Regressing these three quantities against response showed a remarkable predictive capacity ([@Fig:InVivoResults]F). All three quantities were absolutely required for predicting response ([@Fig:InVivoResults]G).

Examining the components of the resulting predictive model revealed how the "A/I" ratio is usually but not always predictive. Each input quantity is scaled by model weighting to indicate the relative contribution of each quantity ([@Fig:InVivoResults]E). From these, the divergent response of IgG2b is elucidated. IgG2a is exceptional in activating DC-like cell populations, while IgG2a and IgG2b have similar capacities to activate NK cells. FcγRIIB knockout changes the baseline activation state of the DC-like populations, making response much more sensitive to NK cell activation. This provides a number of specific, testable predictions: For example, NK cell activation plays a significant and separable role in the response seen to many IgG classes, and all of the partial response seen with IgG2b ([@Fig:InVivoResults]H). Second, FcγRIIB knockout does not necessarily reflect the changes that would occur upon engineering IgG with reduced FcγRIIB binding, since its effects had to be accounted for through a baseline shift. Third, rather than a quantitative difference, IgG2a is qualitatively distinct in its ability to activate DC-like populations. Applying this model can provide focus for further IgG engineering. For example, this predicts that modulating the avidity of antigen binding would strongly influence resultant effector function ([@Fig:InVivoResults]I).