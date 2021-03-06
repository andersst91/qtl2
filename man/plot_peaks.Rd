% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/plot_peaks.R
\name{plot_peaks}
\alias{plot_peaks}
\title{Plot QTL peak locations}
\usage{
plot_peaks(peaks, map, chr = NULL, tick_height = 0.3, gap = NULL,
  lod_labels = FALSE, ...)
}
\arguments{
\item{peaks}{Data frame such as that produced by
\code{\link[=find_peaks]{find_peaks()}}) containing columns
\code{chr}, \code{pos}, \code{lodindex}, and \code{lodcolumn}.
May also contain columns \code{ci_lo} and \code{ci_hi}, in
which case intervals will be plotted.}

\item{map}{Marker map, used to get chromosome lengths (and start
and end positions).}

\item{chr}{Selected chromosomes to plot; a vector of character
strings.}

\item{tick_height}{Height of tick marks at the peaks (a number between 0 and 1).}

\item{gap}{Gap between chromosomes. The default is 1\% of the total genome length.}

\item{lod_labels}{If TRUE, plot LOD scores near the intervals. Uses
three hidden graphics parameters, \code{label_gap} (distance between
CI and LOD text label), \code{label_left} (vector that indicates
whether the labels should go on the left side; TRUE=on left,
FALSE=on right, NA=put into larger gap on that chromosome), and
\code{label_cex} that controls the size of these labels}

\item{...}{Additional graphics parameters}
}
\value{
None.
}
\description{
Plot QTL peak locations (possibly with intervals) for multiple traits.
}
\section{Hidden graphics parameters}{

A number of graphics parameters can be passed via \code{...}. For
example, \code{bgcolor} to control the background color and
\code{altbgcolor} to control the background color on alternate chromosomes.
These are not included as formal parameters in order to avoid
cluttering the function definition.
}

\examples{
# read data
iron <- read_cross2(system.file("extdata", "iron.zip", package="qtl2"))
\dontshow{iron <- iron[,c(1,2,7,8,9,13,15,16,19)]}

# insert pseudomarkers into map
map <- insert_pseudomarkers(iron$gmap, step=1)

# calculate genotype probabilities
probs <- calc_genoprob(iron, map, error_prob=0.002)

# grab phenotypes and covariates; ensure that covariates have names attribute
pheno <- iron$pheno
covar <- match(iron$covar$sex, c("f", "m")) # make numeric
names(covar) <- rownames(iron$covar)
Xcovar <- get_x_covar(iron)

# perform genome scan
out <- scan1(probs, pheno, addcovar=covar, Xcovar=Xcovar)

# find peaks above lod=3.5 (and calculate 1.5-LOD support intervals)
peaks <- find_peaks(out, map, threshold=3.5, drop=1.5)

plot_peaks(peaks, map)

# show LOD scores
plot_peaks(peaks, map, lod_labels=TRUE)

# show LOD scores, controlling whether they go on the left or right
plot_peaks(peaks, map, lod_labels=TRUE,
           label_left=c(TRUE, TRUE, TRUE, FALSE, TRUE, FALSE))
}
\seealso{
\code{\link[=find_peaks]{find_peaks()}}, \code{\link[=plot_lodpeaks]{plot_lodpeaks()}}
}
