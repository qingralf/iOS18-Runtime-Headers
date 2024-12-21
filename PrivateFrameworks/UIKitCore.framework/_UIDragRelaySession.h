/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIDragRelaySession : NSObject <_UIDraggingSessionDelegate> {
    <_UIDragRelaySessionDelegate> * _delegate;
    NSArray * _dragItems;
    _UIInternalDraggingSessionSource * _draggingSessionSource;
    unsigned int  _sessionIdentifier;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property <_UIDragRelaySessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *dragItems;
@property (nonatomic, retain) _UIInternalDraggingSessionSource *draggingSessionSource;
@property (readonly) unsigned long long hash;
@property unsigned int sessionIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_draggingSession:(id)arg1 updatedPresentation:(id)arg2;
- (void)beginDragFromView:(id)arg1 point:(struct CGPoint { double x1; double x2; })arg2;
- (void)cancelDrag;
- (id)delegate;
- (id)dragItems;
- (void)dragSessionCompletedInitialCheckIn;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingWithinApp:(bool)arg2;
- (void)draggingSessionDidEnd:(id)arg1 withOperation:(unsigned long long)arg2;
- (void)draggingSessionDidTransferItems:(id)arg1;
- (bool)draggingSessionDynamicallyUpdatesPrefersFullSizePreviews:(id)arg1;
- (id)draggingSessionSource;
- (id)initWithDragItems:(id)arg1;
- (unsigned int)sessionIdentifier;
- (void)setDelegate:(id)arg1;
- (void)setDragItems:(id)arg1;
- (void)setDraggingSessionSource:(id)arg1;
- (void)setSessionIdentifier:(unsigned int)arg1;
- (void)updateDragPreviewForItemsAtIndexes:(id)arg1;

@end