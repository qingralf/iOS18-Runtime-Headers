/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChronoServices.framework/ChronoServices
 */

@interface CHSWidgetExtensionSet : NSObject <NSCopying> {
    void allExtensions;
    void equivalentBundleIdentifierResolver;
    void iconResolver;
    void widgetExtensionContainers;
}

@property (nonatomic, copy) NSSet *allExtensions;
@property (nonatomic, copy) NSArray *widgetExtensionContainers;

- (void).cxx_destruct;
- (id)allExtensions;
- (id)copyWithZone:(void*)arg1;
- (id)init;
- (id)initWithExtensions:(id)arg1 equivalentBundleIdentifierResolver:(id)arg2 iconResolver:(id)arg3;
- (void)setAllExtensions:(id)arg1;
- (void)setWidgetExtensionContainers:(id)arg1;
- (id)widgetExtensionContainerForContainerBundleIdentifier:(id)arg1;
- (id)widgetExtensionContainerForExtensionBundleIdentifier:(id)arg1;
- (id)widgetExtensionContainers;
- (id)widgetExtensionForExtensionIdentity:(id)arg1;

@end