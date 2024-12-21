/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy
 */

@interface HMDThreadNetworkStateChangeEvent : NSObject {
    long long  _eventType;
    long long  _eventValue;
}

@property (nonatomic, readonly) long long eventType;
@property (nonatomic, readonly) long long eventValue;

- (id)_connectionStateValueToString;
- (id)_eventTypeToString;
- (id)_eventValueToString;
- (id)_nodeTypeValueToString;
- (id)description;
- (long long)eventType;
- (long long)eventValue;
- (id)initWithEventType:(long long)arg1 eventValue:(unsigned long long)arg2;

@end