/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIPhysicalButtonInteractionBSActionDriver : NSObject <_UIPhysicalButtonInteractionBSActionDriving> {
    <_UIPhysicalButtonInteractionDriverReceiving> * _receiver;
}

@property (nonatomic, readonly) long long _driverType;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)_driverType;
- (void)_handleBSAction:(id)arg1;
- (void)_installToViewIfNeeded:(id)arg1;
- (void)_physicalButtonConfigurationsDidChange;
- (void)_uninstallFromViewIfNeeded:(id)arg1;
- (id)init;
- (id)initWithReceiver:(id)arg1;

@end
