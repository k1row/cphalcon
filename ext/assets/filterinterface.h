
/*
  +------------------------------------------------------------------------+
  | Phalcon Framework                                                      |
  +------------------------------------------------------------------------+
  | Copyright (c) 2011-2013 Phalcon Team (http://www.phalconphp.com)       |
  +------------------------------------------------------------------------+
  | This source file is subject to the New BSD License that is bundled     |
  | with this package in the file docs/LICENSE.txt.                        |
  |                                                                        |
  | If you did not receive a copy of the license and are unable to         |
  | obtain it through the world-wide-web, please send an email             |
  | to license@phalconphp.com so we can send you a copy immediately.       |
  +------------------------------------------------------------------------+
  | Authors: Andres Gutierrez <andres@phalconphp.com>                      |
  |          Eduar Carvajal <eduar@phalconphp.com>                         |
  +------------------------------------------------------------------------+
*/

extern zend_class_entry *phalcon_assets_filterinterface_ce;

PHALCON_INIT_CLASS(Phalcon_Assets_FilterInterface);

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_assets_filterinterface_filter, 0, 0, 1)
	ZEND_ARG_INFO(0, content)
ZEND_END_ARG_INFO()

PHALCON_INIT_FUNCS(phalcon_assets_filterinterface_method_entry){
	PHP_ABSTRACT_ME(Phalcon_Assets_FilterInterface, filter, arginfo_phalcon_assets_filterinterface_filter)
	PHP_FE_END
};

