/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFCloudKitSyncEvent : NSObject {
    NSDictionary * _content;
    NSDate * _date;
    int  _eventType;
    int  _identifier;
}

@property (nonatomic, readonly) NSDictionary *content;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) int eventType;
@property (nonatomic, readonly) int identifier;

- (void).cxx_destruct;
- (id)content;
- (id)date;
- (id)description;
- (int)eventType;
- (int)identifier;
- (id)initWithIdentifier:(int)arg1 eventType:(int)arg2 date:(id)arg3 content:(id)arg4;

@end
