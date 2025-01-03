/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCNotificationPayload : NSObject <NSCopying> {
    NSString * _bodyText;
    <FCHeadlineProviding> * _headline;
    NTPBNotificationItem * _notificationItem;
}

@property (nonatomic, readonly) NSString *bodyText;
@property (nonatomic, readonly) <FCHeadlineProviding> *headline;
@property (nonatomic, readonly) NTPBNotificationItem *notificationItem;

- (void).cxx_destruct;
- (id)bodyText;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)headline;
- (id)init;
- (id)initWithNotificationItem:(id)arg1 headline:(id)arg2 bodyText:(id)arg3;
- (id)notificationItem;

@end
