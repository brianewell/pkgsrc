# $NetBSD: Makefile,v 1.40 2021/03/09 12:11:40 adam Exp $

DISTNAME=	ansible-3.0.0
CATEGORIES=	sysutils python
MASTER_SITES=	${MASTER_SITE_PYPI:=a/ansible/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://www.ansible.com/
COMMENT=	SSH-based configuration management, deployment, and task execution
LICENSE=	gnu-gpl-v3

PREV_PKGPATH=	sysutils/ansible2

DEPENDS+=	ansible-base>=2.10.5:../../sysutils/ansible-base

USE_LANGUAGES=	# none

REPLACE_PYTHON+=	ansible_collections/*/*/.azure-pipelines/scripts/*.py
REPLACE_PYTHON+=	ansible_collections/*/*/tests/*/*.py
REPLACE_PYTHON+=	ansible_collections/*/*/tests/*/*/*.py
REPLACE_PYTHON+=	ansible_collections/*/*/tests/*/*/*/*.py
REPLACE_PYTHON+=	ansible_collections/community/general/tests/integration/targets/django_manage/files/base_test/*/*/*.py
REPLACE_PYTHON+=	ansible_collections/community/okd/ci/downstream_fragments.py
REPLACE_PYTHON+=	ansible_collections/ngine_io/cloudstack/scripts/inventory/cloudstack.py
REPLACE_PYTHON+=	ansible_collections/sensu/sensu_go/fix-pytest-ini.py

CHECK_INTERPRETER_SKIP+=	${PYSITELIB}/ansible_collections/*/*/.azure-pipelines/scripts/*.sh
CHECK_INTERPRETER_SKIP+=	${PYSITELIB}/ansible_collections/*/*/tests/*/*.sh
CHECK_INTERPRETER_SKIP+=	${PYSITELIB}/ansible_collections/*/*/tests/*/*/*.sh
CHECK_INTERPRETER_SKIP+=	${PYSITELIB}/ansible_collections/*/*/tests/*/*/*/*.sh
CHECK_INTERPRETER_SKIP+=	${PYSITELIB}/ansible_collections/netbox/netbox/hacking/*.sh
CHECK_INTERPRETER_SKIP+=	${PYSITELIB}/ansible_collections/community/vmware/check-ignores-order
CHECK_INTERPRETER_SKIP+=	${PYSITELIB}/ansible_collections/infinidat/infinibox/bin/*.sh

post-extract:
	${FIND} ${WRKSRC}/ansible_collections -name .DS_Store -delete

.include "../../lang/python/application.mk"
.include "../../lang/python/egg.mk"
.include "../../mk/bsd.pkg.mk"
