/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXAction : NSObject {
    NSString * _actionNameLocalizationKey;
    NSString * _actionSystemImageName;
    NSString * _analyticsEventName;
    bool  _executionStarted;
    NSString * _localizedActionName;
    long long  _phase;
    NSString * _redoMenuItemTitle;
    NSString * _undoMenuItemTitle;
}

@property (nonatomic, readonly) NSString *actionIdentifier;
@property (nonatomic, readonly) NSString *actionNameLocalizationKey;
@property (nonatomic, readonly) NSString *actionSystemImageName;
@property (nonatomic, readonly) NSString *analyticsEventName;
@property (readonly) bool executionStarted;
@property (nonatomic, readonly) NSString *localizedActionName;
@property (nonatomic, readonly) long long phase;
@property (nonatomic, readonly) NSString *redoMenuItemTitle;
@property (nonatomic, readonly) NSString *undoMenuItemTitle;

- (void).cxx_destruct;
- (void)_didPerformActionWithUndoManager:(id)arg1 success:(bool)arg2 error:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_performRedoWithUndoManager:(id)arg1;
- (void)_performUndoWithUndoManager:(id)arg1;
- (void)_registerRedoWithUndoManager:(id)arg1;
- (void)_registerUndoWithUndoManager:(id)arg1;
- (void)_unregisterFromUndoManager:(id)arg1;
- (void)_updateNameWithUndoManager:(id)arg1;
- (id)actionIdentifier;
- (id)actionNameLocalizationKey;
- (id)actionSystemImageName;
- (id)analyticsEventName;
- (void)executeWithUndoManager:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)executionStarted;
- (id)localizedActionName;
- (void)performAction:(id /* block */)arg1;
- (void)performRedo:(id /* block */)arg1;
- (void)performUndo:(id /* block */)arg1;
- (long long)phase;
- (id)redoMenuItemTitle;
- (void)registerWithUndoManager:(id)arg1;
- (void)removeAllActionsFromUndoManager:(id)arg1;
- (id)undoMenuItemTitle;

@end
