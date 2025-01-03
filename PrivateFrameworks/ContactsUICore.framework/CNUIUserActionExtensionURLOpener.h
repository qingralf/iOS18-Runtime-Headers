/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

@interface CNUIUserActionExtensionURLOpener : NSObject <CNUIUserActionURLOpener> {
    NSExtensionContext * _extensionContext;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSExtensionContext *extensionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)extensionContext;
- (id)initWithExtensionContext:(id)arg1;
- (id)openURL:(id)arg1 isSensitive:(bool)arg2 connectionEndpoint:(id)arg3 bundleIdentifier:(id)arg4 withScheduler:(id)arg5;
- (id)openURL:(id)arg1 isSensitive:(bool)arg2 withScheduler:(id)arg3;
- (id)openURL:(id)arg1 withScheduler:(id)arg2;

@end
