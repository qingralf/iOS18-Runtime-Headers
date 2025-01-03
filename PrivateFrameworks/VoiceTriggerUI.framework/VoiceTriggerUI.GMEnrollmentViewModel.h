/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
 */

@interface VoiceTriggerUI.GMEnrollmentViewModel : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _$observationRegistrar;
    void _continuation;
    void _instruction;
    void _prelude;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithPrelude:(id)arg1 instruction:(id)arg2 continuation:(id)arg3;
- (void)setContinuationLabel:(id)arg1;
- (void)setContinuationLabelHidden:(bool)arg1;
- (void)setIntructionLabel:(id)arg1;
- (void)setIntructionLabelHidden:(bool)arg1;
- (void)setPreludeLabel:(id)arg1;
- (void)setPreludeLabelHidden:(bool)arg1;

@end
