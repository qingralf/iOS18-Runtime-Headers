/* Generated by RuntimeBrowser.
 */

@protocol WKActionSheetAssistantDelegate <NSObject>

@required

- (struct RetainPtr<NSArray> { void *x1; })actionSheetAssistant:(WKActionSheetAssistant *)arg1 decideActionsForElement:(_WKActivatedElementInfo *)arg2 defaultActions:(struct RetainPtr<NSArray> { void *x1; })arg3;
- (void)actionSheetAssistant:(WKActionSheetAssistant *)arg1 openElementAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)actionSheetAssistant:(WKActionSheetAssistant *)arg1 performAction:(unsigned char)arg2;
- (void)actionSheetAssistant:(WKActionSheetAssistant *)arg1 shareElementWithURL:(NSURL *)arg2 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (bool)actionSheetAssistant:(WKActionSheetAssistant *)arg1 shouldIncludeAppLinkActionsForElement:(_WKActivatedElementInfo *)arg2;
- (struct optional<WebKit::InteractionInformationAtPosition> { union { BOOL x_1_1_1; struct InteractionInformationAtPosition { struct InteractionInformationRequest { struct IntPoint { int x_1_4_1; int x_1_4_2; } x_1_3_1; bool x_1_3_2; bool x_1_3_3; bool x_1_3_4; bool x_1_3_5; bool x_1_3_6; bool x_1_3_7; bool x_1_3_8; } x_2_2_1; bool x_2_2_2; struct optional<bool> { union { BOOL x_1_4_1; bool x_1_4_2; } x_3_3_1; bool x_3_3_2; } x_2_2_3; unsigned char x_2_2_4; bool x_2_2_5; bool x_2_2_6; bool x_2_2_7; bool x_2_2_8; bool x_2_2_9; bool x_2_2_10; bool x_2_2_11; bool x_2_2_12; bool x_2_2_13; bool x_2_2_14; bool x_2_2_15; bool x_2_2_16; bool x_2_2_17; struct Markable<WebCore::ProcessQualified<WTF::ObjectIdentifierGeneric<WebCore::ScrollingNodeIDType, WTF::ObjectIdentifierMainThreadAccessTraits<uint64_t>, unsigned long long, WTF::SupportsObjectIdentifierNullState::Yes>>, WebCore::ProcessQualified<WTF::ObjectIdentifierGeneric<WebCore::ScrollingNodeIDType, WTF::ObjectIdentifierMainThreadAccessTraits<uint64_t>, unsigned long long, WTF::SupportsObjectIdentifierNullState::Yes>>::MarkableTraits> { struct ProcessQualified<WTF::ObjectIdentifierGeneric<WebCore::ScrollingNodeIDType, WTF::ObjectIdentifierMainThreadAccessTraits<uint64_t>, unsigned long long, WTF::SupportsObjectIdentifierNullState::Yes>> { struct ObjectIdentifierGeneric<WebCore::ScrollingNodeIDType, WTF::ObjectIdentifierMainThreadAccessTraits<uint64_t>, unsigned long long, WTF::SupportsObjectIdentifierNullState::Yes> { unsigned long long x_1_5_1; } x_1_4_1; struct ObjectIdentifierGeneric<WebCore::ProcessIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits<uint64_t>, unsigned long long, WTF::SupportsObjectIdentifierNullState::Yes> { unsigned long long x_2_5_1; } x_1_4_2; } x_18_3_1; } x_2_2_18; } x_1_1_2; } x1; })positionInformationForActionSheetAssistant:(WKActionSheetAssistant *)arg1;

@optional

- (void)_actionSheetAssistant:(WKActionSheetAssistant *)arg1 performAction:(unsigned char)arg2 onElements:(void*)arg3;
- (bool)_allowAnimationControls;
- (void)actionSheetAssistant:(WKActionSheetAssistant *)arg1 copySubject:(UIImage *)arg2 sourceMIMEType:(NSString *)arg3;
- (void)actionSheetAssistant:(void *)arg1 getAlternateURLForImage:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: WKActionSheetAssistant *, UIImage *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSDictionary *, void*
- (void)actionSheetAssistant:(WKActionSheetAssistant *)arg1 lookUpImage:(UIImage *)arg2 imageURL:(NSURL *)arg3 title:(NSString *)arg4 imageBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5;
- (void)actionSheetAssistant:(WKActionSheetAssistant *)arg1 shareElementWithImage:(UIImage *)arg2 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (bool)actionSheetAssistant:(WKActionSheetAssistant *)arg1 shouldIncludeLookUpImageActionForElement:(_WKActivatedElementInfo *)arg2;
- (bool)actionSheetAssistant:(WKActionSheetAssistant *)arg1 shouldIncludeShowTextActionForElement:(_WKActivatedElementInfo *)arg2;
- (bool)actionSheetAssistant:(WKActionSheetAssistant *)arg1 showCustomSheetForElement:(_WKActivatedElementInfo *)arg2;
- (void)actionSheetAssistant:(WKActionSheetAssistant *)arg1 showTextForImage:(UIImage *)arg2 imageURL:(NSURL *)arg3 title:(NSString *)arg4 imageBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5;
- (void)actionSheetAssistant:(WKActionSheetAssistant *)arg1 willStartInteractionWithElement:(_WKActivatedElementInfo *)arg2;
- (void)actionSheetAssistantDidDismissContextMenu:(WKActionSheetAssistant *)arg1;
- (void)actionSheetAssistantDidShowContextMenu:(WKActionSheetAssistant *)arg1;
- (void)actionSheetAssistantDidStopInteraction:(WKActionSheetAssistant *)arg1;
- (bool)actionSheetAssistantShouldIncludeCopySubjectAction:(WKActionSheetAssistant *)arg1;
- (NSArray *)additionalMediaControlsContextMenuItemsForActionSheetAssistant:(WKActionSheetAssistant *)arg1;
- (UITargetedPreview *)createTargetedContextMenuHintForActionSheetAssistant:(WKActionSheetAssistant *)arg1;
- (NSDictionary *)dataDetectionContextForActionSheetAssistant:(WKActionSheetAssistant *)arg1 positionInformation:(const void*)arg2;
- (void)removeContextMenuViewIfPossibleForActionSheetAssistant:(WKActionSheetAssistant *)arg1;
- (NSString *)selectedTextForActionSheetAssistant:(WKActionSheetAssistant *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })unoccludedWindowBoundsForActionSheetAssistant:(WKActionSheetAssistant *)arg1;
- (void)updatePositionInformationForActionSheetAssistant:(WKActionSheetAssistant *)arg1;

@end
