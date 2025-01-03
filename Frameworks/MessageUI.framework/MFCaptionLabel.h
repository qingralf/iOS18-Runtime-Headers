/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFCaptionLabel : UILabel {
    NSArray * _bccRecipients;
    NSArray * _ccRecipients;
    <MFCaptionLabelDataSource> * _dataSource;
    NSArray * _fromSenders;
    bool  _hasDifferentReplyToAddress;
    bool  _needsLabelUpdate;
    NSArray * _otherSigners;
    bool  _preventAutoUpdatingLabel;
    NSArray * _replyToSenders;
    NSArray * _toRecipients;
}

@property (nonatomic, retain) NSArray *bccRecipients;
@property (nonatomic, retain) NSArray *ccRecipients;
@property (nonatomic) <MFCaptionLabelDataSource> *dataSource;
@property (nonatomic, retain) NSArray *fromSenders;
@property (nonatomic) bool hasDifferentReplyToAddress;
@property (nonatomic, retain) NSArray *otherSigners;
@property (nonatomic) bool preventAutoUpdatingLabel;
@property (nonatomic, copy) NSArray *replyToSenders;
@property (nonatomic, retain) NSArray *toRecipients;

+ (id)attributedStringsCache;

- (void).cxx_destruct;
- (id)_attributedStringForImage:(id)arg1;
- (id)_chevronAttributedString;
- (id)_chevronImage;
- (id)_concatenateStringForRecipientList:(id)arg1 recipientCount:(unsigned long long)arg2 prefixGenerationBlock:(id /* block */)arg3 listSuffix:(id)arg4;
- (id)_formattedAttributedString;
- (id)_formattedReplyToString;
- (double)_maxWidthForRecipientList;
- (id)_questionMarkAttributedString;
- (id)_questionMarkImage;
- (void)_setNeedsLabelUpdate;
- (id)_stringAtIndexForCombinedRecipientLists:(unsigned long long)arg1;
- (id)_whitespaceStringWithWidth:(double)arg1;
- (id)_whitespaceTextAttachment;
- (id)bccRecipients;
- (id)ccRecipients;
- (id)dataSource;
- (id)fromSenders;
- (bool)hasDifferentReplyToAddress;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id /* block */)lengthValidationBlock;
- (id)otherSigners;
- (bool)preventAutoUpdatingLabel;
- (id)replyToSenders;
- (void)setBccRecipients:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCcRecipients:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFromSenders:(id)arg1;
- (void)setHasDifferentReplyToAddress:(bool)arg1;
- (void)setOtherSigners:(id)arg1;
- (void)setPreventAutoUpdatingLabel:(bool)arg1;
- (void)setReplyToSenders:(id)arg1;
- (void)setToRecipients:(id)arg1;
- (id)toRecipients;
- (void)updateLabelNow;

@end
