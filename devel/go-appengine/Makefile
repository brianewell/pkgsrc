# $NetBSD: Makefile,v 1.25 2021/01/23 14:22:53 bsiegert Exp $

DISTNAME=	appengine-1.1.0
PKGNAME=	go-${DISTNAME}
PKGREVISION=	23
CATEGORIES=	devel
MASTER_SITES=	${MASTER_SITE_GITHUB:=golang/}
GITHUB_PROJECT=	${PKGBASE:S/^go-//}
GITHUB_TAG=	v${PKGVERSION_NOREV}

MAINTAINER=	minskim@NetBSD.org
HOMEPAGE=	http://google.golang.org/appengine
COMMENT=	Go App Engine packages
LICENSE=	apache-2.0

GO_DIST_BASE=	${GITHUB_PROJECT}-${PKGVERSION_NOREV}
GO_SRCPATH=	google.golang.org/appengine

REPLACE_SH+=	internal/regen.sh

.include "../../devel/go-protobuf/buildlink3.mk"
.include "../../net/go-net/buildlink3.mk"
.include "../../textproc/go-text/buildlink3.mk"
.include "../../lang/go/go-package.mk"
.include "../../mk/bsd.pkg.mk"
