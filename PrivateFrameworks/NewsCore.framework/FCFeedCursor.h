/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFeedCursor : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _order;
}

@property (nonatomic, readonly, copy) NSDate *date;
@property (nonatomic, readonly) bool isBottomOfFeed;
@property (nonatomic, readonly) bool isTopOfFeed;
@property (nonatomic) unsigned long long order;

+ (id)cursorForBottomOfFeed;
+ (id)cursorForCurrentDate;
+ (id)cursorForDate:(id)arg1;
+ (id)cursorForOrder:(unsigned long long)arg1;
+ (id)cursorForTimeIntervalBeforeNow:(double)arg1;
+ (id)cursorForTopOfFeed;
+ (bool)supportsSecureCoding;

- (id)bottommostCursor:(id)arg1;
- (long long)compareToCursor:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasReachedCursor:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isBottomOfFeed;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCursor:(id)arg1;
- (bool)isTopOfFeed;
- (unsigned long long)order;
- (void)setOrder:(unsigned long long)arg1;
- (id)topmostCursor:(id)arg1;

@end
