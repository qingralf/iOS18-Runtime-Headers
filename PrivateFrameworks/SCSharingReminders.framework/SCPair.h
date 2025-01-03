/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SCSharingReminders.framework/SCSharingReminders
 */

@interface SCPair : NSObject <NSCopying> {
    id  _first;
    id  _second;
}

@property (nonatomic, copy) id first;
@property (nonatomic, copy) id second;

+ (id)pairWithFirst:(id)arg1 second:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)first;
- (unsigned long long)hash;
- (id)initNonMemoizedWithFirst:(id)arg1 second:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPair:(id)arg1;
- (id)second;
- (void)setFirst:(id)arg1;
- (void)setSecond:(id)arg1;

@end
