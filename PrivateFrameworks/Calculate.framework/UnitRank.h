/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Calculate.framework/Calculate
 */

@interface UnitRank : NSObject {
    id  _context;
    bool  _isConfusable;
    bool  _isLaTeX;
    NSLocale * _locale;
    float  _rank;
    int  _tokenType;
    int  _unitID;
}

@property (nonatomic, retain) id context;
@property (nonatomic) bool isConfusable;
@property (nonatomic) bool isLaTeX;
@property (nonatomic, retain) NSLocale *locale;
@property (nonatomic) float rank;
@property (nonatomic) int tokenType;
@property (nonatomic) int unitID;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)context;
- (id)description;
- (unsigned long long)hash;
- (id)initWithUnitID:(int)arg1 rank:(float)arg2 locale:(id)arg3;
- (id)initWithUnitID:(int)arg1 rank:(float)arg2 locale:(id)arg3 context:(id)arg4;
- (bool)isConfusable;
- (bool)isEqual:(id)arg1;
- (bool)isLaTeX;
- (id)locale;
- (float)rank;
- (void)setContext:(id)arg1;
- (void)setIsConfusable:(bool)arg1;
- (void)setIsLaTeX:(bool)arg1;
- (void)setLocale:(id)arg1;
- (void)setRank:(float)arg1;
- (void)setTokenType:(int)arg1;
- (void)setUnitID:(int)arg1;
- (int)tokenType;
- (int)unitID;

@end
