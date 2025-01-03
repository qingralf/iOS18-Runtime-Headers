/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKSatelliteSuppressedNotificationChatItem : CKChatItem {
    NSAttributedString * _satelliteNoNotificationTitleLabelAttributedText;
}

@property (nonatomic, readonly) IMSatelliteSuppressedNotificationChatItem *imSatelliteSuppressedNotificationChatItem;
@property (nonatomic, retain) NSAttributedString *satelliteNoNotificationTitleLabelAttributedText;

- (void).cxx_destruct;
- (Class)cellClass;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (bool)displayDuringSend;
- (id)imSatelliteSuppressedNotificationChatItem;
- (id)layoutItemSpacingWithEnvironment:(id)arg1 datasourceItemIndex:(long long)arg2 allDatasourceItems:(id)arg3 supplementryItems:(id)arg4 sizeOverride:(struct CGSize { double x1; double x2; })arg5;
- (unsigned long long)layoutType;
- (struct CGSize { double x1; double x2; })loadSizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(out struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (id)loadTranscriptText;
- (id)satelliteNoNotificationTitleLabelAttributedText;
- (void)setSatelliteNoNotificationTitleLabelAttributedText:(id)arg1;
- (BOOL)transcriptOrientation;
- (void)unloadTranscriptText;

@end
