# $NetBSD: Makefile,v 1.9 2021/02/13 11:35:31 markd Exp $

DISTNAME=	polyglossia
PKGNAME=	tex-${DISTNAME}-1.51
TEXLIVE_REV=	57098

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://ctan.org/pkg/polyglossia
COMMENT=	An alternative to babel for XeLaTeX and LuaLaTeX
LICENSE=	mit AND lppl-1.3c AND cc0-1.0-universal

DEPENDS+=	tex-etoolbox>=2.1d:../../devel/tex-etoolbox
DEPENDS+=	tex-filehook-[0-9]*:../../print/tex-filehook
DEPENDS+=	tex-fontspec>=2.4c:../../fonts/tex-fontspec
DEPENDS+=	tex-iftex-[0-9]*:../../print/tex-iftex
DEPENDS+=	tex-makecmds-[0-9]*:../../print/tex-makecmds
DEPENDS+=	tex-xkeyval-[0-9]*:../../print/tex-xkeyval
DEPENDS+=	xetex>=0.9995.3nb1:../../print/xetex

.include "../../print/texlive/package.mk"
.include "../../mk/bsd.pkg.mk"
