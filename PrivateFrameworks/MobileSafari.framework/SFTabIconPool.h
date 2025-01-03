/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileSafari.framework/MobileSafari
 */

@interface SFTabIconPool : NSObject {
    void wrapped;
}

@property (nonatomic, copy) id /* block */ existingIconProvider;
@property (nonatomic, copy) id /* block */ extensionIconProvider;
@property (nonatomic, copy) id /* block */ urlProvider;

- (void).cxx_destruct;
- (id /* block */)existingIconProvider;
- (id /* block */)extensionIconProvider;
- (void)iconDidChangeForIdentifier:(id)arg1;
- (id)init;
- (id)initWithSiteMetadataManager:(id)arg1;
- (id)makeRegistrationForIdentifier:(id)arg1;
- (void)setExistingIconProvider:(id /* block */)arg1;
- (void)setExtensionIconProvider:(id /* block */)arg1;
- (void)setUrlProvider:(id /* block */)arg1;
- (id /* block */)urlProvider;

@end
