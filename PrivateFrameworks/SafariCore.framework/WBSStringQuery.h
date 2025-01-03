/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

@interface WBSStringQuery : NSObject {
    long long  _matchingType;
    NSString * _string;
}

@property (nonatomic, readonly) long long matchingType;
@property (nonatomic, readonly, copy) NSString *matchingTypeDescriptionString;
@property (nonatomic, readonly, copy) NSString *string;

+ (id)queryThatMatchesEverything;

- (void).cxx_destruct;
- (id)initWithString:(id)arg1 matchingType:(long long)arg2;
- (long long)matchingType;
- (id)matchingTypeDescriptionString;
- (id)string;

@end
