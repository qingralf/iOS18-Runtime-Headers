/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PushToTalk.framework/PushToTalk
 */

@interface PTPendingPush : NSObject {
    bool  _isHighPriority;
    bool  _isServiceUpdateMessage;
    NSDictionary * _payload;
    long long  _remainingHighPriorityBudget;
    id /* block */  _reply;
    NSUUID * _uuid;
}

@property (nonatomic) bool isHighPriority;
@property (nonatomic) bool isServiceUpdateMessage;
@property (nonatomic, retain) NSDictionary *payload;
@property (nonatomic) long long remainingHighPriorityBudget;
@property (nonatomic, copy) id /* block */ reply;
@property (nonatomic, retain) NSUUID *uuid;

- (void).cxx_destruct;
- (bool)isHighPriority;
- (bool)isServiceUpdateMessage;
- (id)payload;
- (long long)remainingHighPriorityBudget;
- (id /* block */)reply;
- (void)setIsHighPriority:(bool)arg1;
- (void)setIsServiceUpdateMessage:(bool)arg1;
- (void)setPayload:(id)arg1;
- (void)setRemainingHighPriorityBudget:(long long)arg1;
- (void)setReply:(id /* block */)arg1;
- (void)setUuid:(id)arg1;
- (id)uuid;

@end