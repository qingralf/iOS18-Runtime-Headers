/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarAccessoryFramework.framework/CarAccessoryFramework
 */

@interface CAFHistoricalNotificationUserActions : NSObject <NSFastEnumeration> {
    NSArray * _historicalNotificationUserActions;
    NSError * _parseError;
}

@property (nonatomic, readonly) NSString *formattedValue;
@property (nonatomic, readonly) NSArray *historicalNotificationUserActions;
@property (nonatomic, readonly) NSError *parseError;

+ (id)historicalNotificationUserActionsWithArray:(id)arg1;
+ (id)historicalNotificationUserActionsWithHistoricalNotificationUserActions:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)formattedValue;
- (id)historicalNotificationUserActions;
- (id)initWithArray:(id)arg1;
- (id)initWithHistoricalNotificationUserActions:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)parseError;

@end
