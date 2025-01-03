/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit
 */

@interface ConversationKit.DisplayLayerVisibilityObserver : _TtCs12_SwiftObject <CNKScreenSharingInteractionControllerDelegate, CNKScreenSharingStateObserving> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _isHidingLayersFromClonedDisplay;
    void display;
    void screenShareAttributes;
}

- (void)screenSharingInteractionController:(id)arg1 didUpdateRemoteControlStatus:(bool)arg2;
- (void)screenSharingStateMonitor:(id)arg1 didUpdateScreenSharingBroadcastingState:(bool)arg2;

@end
