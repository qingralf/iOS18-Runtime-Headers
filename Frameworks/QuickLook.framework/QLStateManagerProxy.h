/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLStateManagerProxy : NSObject <QLPreviewControllerStateProtocolHostOnly> {
    <QLPreviewControllerStateProtocolHostOnly> * _stateManager;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property <QLPreviewControllerStateProtocolHostOnly> *stateManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dropMethod;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setStateManager:(id)arg1;
- (id)stateManager;

@end
