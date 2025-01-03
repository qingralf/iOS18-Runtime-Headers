/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKSatelliteSMSFallbackStatusChatItem : CKChatItem {
    NSAttributedString * _smsFallbackStatusTitleLabelAttributedText;
}

@property (nonatomic, retain) NSAttributedString *smsFallbackStatusTitleLabelAttributedText;

- (void).cxx_destruct;
- (Class)cellClass;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (bool)displayDuringSend;
- (id)imSMSFallbackStatusChatItem;
- (id)layoutItemSpacingWithEnvironment:(id)arg1 datasourceItemIndex:(long long)arg2 allDatasourceItems:(id)arg3 supplementryItems:(id)arg4;
- (unsigned long long)layoutType;
- (struct CGSize { double x1; double x2; })loadSizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(out struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (id)loadTranscriptText;
- (void)setSmsFallbackStatusTitleLabelAttributedText:(id)arg1;
- (id)smsFallbackStatusTitleLabelAttributedText;
- (BOOL)transcriptOrientation;
- (void)unloadTranscriptText;

@end
