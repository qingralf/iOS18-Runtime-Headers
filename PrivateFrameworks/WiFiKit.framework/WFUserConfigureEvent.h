/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

@interface WFUserConfigureEvent : NSObject <WFUIEvent> {
    NSDictionary * _eventDictionary;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *eventDictionary;
@property (nonatomic, readonly) NSString *eventName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)configureEventWithType:(long long)arg1 new:(long long)arg2 old:(long long)arg3;

- (void).cxx_destruct;
- (id)_configureValueStringForType:(long long)arg1;
- (id)_eventTypeStringForType:(long long)arg1;
- (id)eventDictionary;
- (id)eventName;
- (id)initWithType:(long long)arg1 new:(long long)arg2 old:(long long)arg3;

@end
