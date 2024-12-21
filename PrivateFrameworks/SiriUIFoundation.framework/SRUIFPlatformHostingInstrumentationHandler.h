/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriUIFoundation.framework/SiriUIFoundation
 */

@interface SRUIFPlatformHostingInstrumentationHandler : NSObject {
    AFAnalyticsTurnBasedInstrumentationContext * _bringUpTurnIdentifier;
    AFAnalyticsTurnBasedInstrumentationContext * _dismissalTurnIdentifier;
    NSMutableDictionary * _machAbsoluteForAppearances;
    <SRUIFPlatformHostingInstrumentationHandlerDelegate> * _testDelegate;
}

@property (nonatomic) <SRUIFPlatformHostingInstrumentationHandlerDelegate> *testDelegate;

- (void).cxx_destruct;
- (void)_computeStateAndInstrumentIfNecessaryForEvent:(unsigned long long)arg1;
- (void)_instrumentForappearanceEvent:(unsigned long long)arg1 turn:(id)arg2 machAbolsuteTime:(unsigned long long)arg3;
- (void)appearanceDidChange:(unsigned long long)arg1 machAbsoluteTime:(unsigned long long)arg2;
- (void)hostingBringUpProcessedWithTurnIdenitfier:(id)arg1;
- (void)hostingDismissalProcessedWithTurnIdenitfier:(id)arg1;
- (id)init;
- (void)setTestDelegate:(id)arg1;
- (id)testDelegate;

@end