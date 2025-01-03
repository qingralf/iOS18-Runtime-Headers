/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantSettingsSupport.framework/AssistantSettingsSupport
 */

@interface AssistantSettingsSupport.TipsManager : NSObject {
    void appleIntelligenceTip;
    void appleIntelligenceTipObservationTask;
    void hostController;
    void imageCreateTipObservationTask;
    void imageCreationTip;
    void shouldShowTip;
    void tipToDisplay;
}

@property (nonatomic) bool shouldShowTip;

+ (id)shared;

- (void).cxx_destruct;
- (void)configureTipsWithController:(id)arg1;
- (id)init;
- (void)setShouldShowTip:(bool)arg1;
- (bool)shouldShowTip;

@end
