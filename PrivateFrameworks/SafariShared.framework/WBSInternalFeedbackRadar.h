/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSInternalFeedbackRadar : NSObject {
    NSArray * _attachmentPaths;
    NSString * _classification;
    WBSInternalFeedbackRadarComponent * _component;
    NSString * _descriptionTemplate;
    NSArray * _keywords;
    NSString * _reproducibility;
    NSString * _title;
}

@property (nonatomic, copy) NSArray *attachmentPaths;
@property (nonatomic, copy) NSString *classification;
@property (nonatomic, copy) WBSInternalFeedbackRadarComponent *component;
@property (nonatomic, readonly, copy) NSURL *continueInTapToRadarURL;
@property (nonatomic, copy) NSString *descriptionTemplate;
@property (nonatomic, copy) NSArray *keywords;
@property (nonatomic, copy) NSString *reproducibility;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)attachmentPaths;
- (id)classification;
- (id)component;
- (id)continueInTapToRadarURL;
- (id)descriptionTemplate;
- (id)initWithComponent:(id)arg1 title:(id)arg2 descriptionTemplate:(id)arg3;
- (id)keywords;
- (id)reproducibility;
- (void)setAttachmentPaths:(id)arg1;
- (void)setClassification:(id)arg1;
- (void)setComponent:(id)arg1;
- (void)setDescriptionTemplate:(id)arg1;
- (void)setKeywords:(id)arg1;
- (void)setReproducibility:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
