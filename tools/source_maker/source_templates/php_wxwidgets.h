/*
 * @author Mário Soares
 * @contributors Jefferson González
 * 
 * @license 
 * This file is part of wxPHP check the LICENSE file for information.
 * 
 * @description
 * wxWidgets php extension declarations file
 * 
 * @note
 * Some parts of this file are auto-generated by the wxPHP source maker
*/

//Prevent double inclusion 
#ifndef WXPHP_PHP_WXWIDGETS_H_GUARD
#define WXPHP_PHP_WXWIDGETS_H_GUARD

#include "common.h"

/**
 * Define Extension Properties 
 */
#define PHP_WXWIDGETS_EXTNAME        "wxWidgets"
#define PHP_WXWIDGETS_VERSION        "3.0.2.0"

/**
 * Define php compatible library version string
 */
#define WXVERTOSTR_HELPER(s) #s
#define WXVERTOSTR(s) WXVERTOSTR_HELPER(s)
#define WXWIDGETS_LIBRARY_VERSION    WXVERTOSTR(wxMAJOR_VERSION) "." WXVERTOSTR(wxMINOR_VERSION) "." WXVERTOSTR(wxRELEASE_NUMBER)


/**
 * Import configure options when building outside 
 * of the PHP source tree 
 */
#ifdef HAVE_CONFIG_H
	#include "config.h"
#endif

/** 
 * Include PHP Standard Header 
 */
#include "php.h"

/**
 * Define the entry point symbol
 * Zend will use when loading this module
 */
extern zend_module_entry wxWidgets_module_entry;
#define phpext_sample_ptr &wxWidgets_module_entry

/**
 * Custom function to register objects as constants
 */
#define wxPHP_REGISTER_OBJECT_CONSTANT(name, object, flags)  wxphp_register_object_constant((name), sizeof(name), (object), (flags), module_number TSRMLS_CC)
BEGIN_EXTERN_C()
void wxphp_register_object_constant(const char *name, uint name_len, zval object, int flags, int module_number TSRMLS_DC);
END_EXTERN_C()

/**
 * Custom zend_method_call function to call methods with more than 2 parameters
 */
BEGIN_EXTERN_C()
int wxphp_call_method(zval **object_pp, zend_class_entry *obj_ce, zend_function **fn_proxy, const char *function_name, int function_name_len, zval **retval_ptr_ptr, int param_count, zval*** params TSRMLS_DC);
END_EXTERN_C()

class wxPhpClientData : public wxClientData
{
	public:
	wxPhpClientData(zval* phpObj)
	{
			this->phpObj = phpObj;
	}
	zval* phpObj;
};

/**
 * Predefined wxApp class method bindings
 */
PHP_METHOD(php_wxApp, __construct);
PHP_METHOD(php_wxApp, GetInstance);
PHP_METHOD(php_wxApp, SetInstance);
PHP_METHOD(php_wxApp, GetAppDisplayName);
PHP_METHOD(php_wxApp, GetAppName);
PHP_METHOD(php_wxApp, GetClassName);
PHP_METHOD(php_wxApp, GetVendorDisplayName);
PHP_METHOD(php_wxApp, GetVendorName);
PHP_METHOD(php_wxApp, SetAppDisplayName);
PHP_METHOD(php_wxApp, SetAppName);
PHP_METHOD(php_wxApp, SetClassName);
PHP_METHOD(php_wxApp, SetVendorDisplayName);
PHP_METHOD(php_wxApp, SetVendorName);
PHP_METHOD(php_wxApp, Yield);

/**
 * Space reserved for autogenerated class method binding declarations 
 */
// entries --->
// <--- entries


#endif //WXPHP_PHP_WXWIDGETS_H_GUARD
