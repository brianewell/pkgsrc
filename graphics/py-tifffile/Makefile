# $NetBSD: Makefile,v 1.5 2021/03/08 20:07:20 adam Exp $

DISTNAME=	tifffile-2021.3.5
PKGNAME=	${PYPKGPREFIX}-${DISTNAME}
CATEGORIES=	graphics python
MASTER_SITES=	${MASTER_SITE_PYPI:=t/tifffile/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://www.lfd.uci.edu/~gohlke/
COMMENT=	Read and write TIFF(r) files
LICENSE=	modified-bsd

USE_LANGUAGES=	# none

PYTHON_VERSIONS_INCOMPATIBLE=	27 36

post-install:
	cd ${DESTDIR}${PREFIX}/bin && \
	${MV} lsm2bin lsm2bin-${PYVERSSUFFIX} && \
	${MV} tiffcomment tiffcomment-${PYVERSSUFFIX} && \
	${MV} tifffile tifffile-${PYVERSSUFFIX} || ${TRUE}

.include "../../lang/python/egg.mk"
.include "../../math/py-numpy/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
