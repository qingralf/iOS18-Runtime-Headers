/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

@interface SAHIDEventEmbedded : SAHIDEvent

+ (void)parseKTrace:(struct ktrace_session { }*)arg1 findingHIDEvents:(id /* block */)arg2;

- (id)hidEventTypeString;
- (double)thresholdToGroupSameEventType;

@end
