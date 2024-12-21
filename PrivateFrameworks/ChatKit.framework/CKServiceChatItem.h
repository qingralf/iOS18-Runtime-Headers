/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKServiceChatItem : CKMultilineStampLabelChatItem {
    bool  _hasInformativeText;
}

@property (nonatomic) bool hasInformativeText;

- (id)_appendServiceInfoIfNeeded;
- (id)_serviceName;
- (id)_smsFallbackStringForChatItem:(id)arg1;
- (id)_subtextImage;
- (id)_subtextWithImage:(id)arg1;
- (bool)hasInformativeText;
- (unsigned long long)layoutType;
- (id)loadTranscriptText;
- (void)setHasInformativeText:(bool)arg1;

@end