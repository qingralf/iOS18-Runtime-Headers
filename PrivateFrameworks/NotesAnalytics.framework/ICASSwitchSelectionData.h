/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesAnalytics.framework/NotesAnalytics
 */

@interface ICASSwitchSelectionData : NSObject <AADataEventType> {
    ICASSwitchSelectionType * _switchSelectionType;
}

@property (nonatomic, readonly) ICASSwitchSelectionType *switchSelectionType;

+ (id)dataName;
+ (bool)requiresDiagnosticsConsent;

- (void).cxx_destruct;
- (id)initWithSwitchSelectionType:(id)arg1;
- (id)switchSelectionType;
- (id)toDict;

@end