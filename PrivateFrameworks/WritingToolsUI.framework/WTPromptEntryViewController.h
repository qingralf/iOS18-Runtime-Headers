/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WritingToolsUI.framework/WritingToolsUI
 */

@interface WTPromptEntryViewController : UIViewController <UIPopoverControllerDelegate, WTWritingToolsDelegate, _UISceneHostingControllerDelegate> {
    _UISceneHostingController * _hostingController;
    WTWritingToolsController * _writingToolsController;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UISceneHostingController *hostingController;
@property (readonly) Class superclass;
@property (nonatomic) bool wantsWritingToolsInlineEditing; /* unknown property attribute: ? */
@property (nonatomic, readonly) WTWritingToolsController *writingToolsController;

- (void).cxx_destruct;
- (void)_setupSceneHostingWithSessionUUID:(id)arg1;
- (void)clientIsReady;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)hostingController;
- (id)initWithWritingToolsController:(id)arg1 session:(id)arg2;
- (void)invalidateConnection;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)setHostingController:(id)arg1;
- (id)writingToolsController;

@end
