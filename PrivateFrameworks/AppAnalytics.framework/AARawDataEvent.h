/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppAnalytics.framework/AppAnalytics
 */

@interface AARawDataEvent : NSObject <AADataEventType> {
    void dictionary;
    void name;
    void requiresDiagnosticsConsent;
}

+ (id)dataName;

- (void).cxx_destruct;
- (id)init;
- (id)initWithName:(id)arg1 dictionary:(id)arg2;
- (id)initWithName:(id)arg1 dictionary:(id)arg2 requiresDiagnosticsConsent:(bool)arg3;
- (id)toDict;

@end