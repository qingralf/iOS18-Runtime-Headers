/* Generated by RuntimeBrowser
   Image: /usr/lib/libAXSafeCategoryBundle.dylib
 */

@interface UIAccessibilitySafeCategory : NSObject

@property (nonatomic, copy) NSString *accessibilityIdentifier;

+ (void)_addCategoryMethods:(struct objc_method {}**)arg1 count:(unsigned int)arg2 excluding:(id)arg3 toClass:(Class)arg4 isClass:(bool)arg5;
+ (id)_initializeSafeCategoryFromValidationManager;
+ (id)_installLocalValidationMethodOnClassNamed:(id)arg1;
+ (id)_installSafeCategoryOnClass:(Class)arg1 isManaged:(bool)arg2;
+ (void)_installSafeCategoryOnClassNamed:(id)arg1;
+ (id)_installSafeCategoryOnClassNamed:(id)arg1 isManaged:(bool)arg2;
+ (id)_installSafeCategoryValidationMethod;
+ (void)safeCategoryAddDependenciesToCollection:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (Class)safeCategoryTargetClass;
+ (id)safeCategoryTargetClassName;

@end
