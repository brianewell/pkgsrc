# $NetBSD: Makefile,v 1.19 2021/03/08 08:13:03 jaapb Exp $
#

VERSION=	1.7
GITHUB_PROJECT=	Zarith
GITHUB_TAG=	release-${VERSION}
DISTNAME=	${GITHUB_PROJECT}-${VERSION}
PKGNAME=	ocaml-${DISTNAME:tl}
PKGREVISION=	3
CATEGORIES=	math
MASTER_SITES=	${MASTER_SITE_GITHUB:=ocaml/}

MAINTAINER=	markd@NetBSD.org
HOMEPAGE=	https://github.com/ocaml/Zarith
COMMENT=	OCaml arithmetic library for arbitrary precision integers
LICENSE=	gnu-lgpl-v2

# zarith library creation is racy
MAKE_JOBS_SAFE=	no

HAS_CONFIGURE=		yes
CONFIGURE_ENV+=		DESTDIR=${DESTDIR}
USE_TOOLS+=		gmake perl
INSTALLATION_DIRS+=	${OCAML_SITELIBDIR}/zarith

OCAML_USE_FINDLIB=	yes

REPLACE_PERL+=	z_pp.pl

.include "../../devel/gmp/buildlink3.mk"
.include "../../mk/ocaml.mk"
.include "../../mk/bsd.pkg.mk"
