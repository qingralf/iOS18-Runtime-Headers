/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface ChatKit.SendLaterRootViewModel : NSObject <CKSendLaterPluginInfoObserver> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _isForcedPressed;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _scheduledDate;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _state;
    void onRequestPresentation;
    void pluginContext;
}

- (void).cxx_destruct;
- (id)init;
- (void)pluginInfoSelectedDateDidChange:(id)arg1;
- (void)pluginInfoShowingDatePickerDidChange:(id)arg1;

@end