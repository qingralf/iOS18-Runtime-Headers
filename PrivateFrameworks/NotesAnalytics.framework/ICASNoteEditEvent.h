/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesAnalytics.framework/NotesAnalytics
 */

@interface ICASNoteEditEvent : NSObject <AAEventType>

@property (nonatomic, readonly, copy) NSDictionary *eventProperties;

+ (id)eventName;
+ (bool)requiresDiagnosticsConsent;
+ (id)sessionGroup;
+ (long long)timeDurationGranularity;
+ (long long)timestampGranularity;

- (id)eventProperties;

@end