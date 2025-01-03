/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Calculate.framework/Calculate
 */

@interface CalculateToken : NSObject {
    int  _characterType;
    bool  _loadedNeedsWhitespaceAfter;
    bool  _needsWhitespaceAfter;
    NSString * _normalizedText;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    UnitRanks * _ranks;
    NSString * _text;
    unsigned long long  _tokenType;
}

@property (nonatomic) int characterType;
@property (readonly) bool isAnyUnknown;
@property (readonly) bool isMaybeX;
@property (readonly) bool isOpen;
@property (readonly) bool isOperand;
@property (readonly) bool isOperator;
@property (readonly) bool isPotentialVariable;
@property (nonatomic) bool loadedNeedsWhitespaceAfter;
@property (nonatomic) bool needsWhitespaceAfter;
@property (nonatomic, retain) NSString *normalizedText;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic, retain) UnitRanks *ranks;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) unsigned long long tokenType;

+ (bool)isClose:(unsigned long long)arg1;
+ (bool)isOpen:(unsigned long long)arg1;
+ (id)tokenWithType:(unsigned long long)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 text:(id)arg3 ranks:(id)arg4;

- (void).cxx_destruct;
- (int)characterType;
- (id)description;
- (id)initWithType:(unsigned long long)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 text:(id)arg3 ranks:(id)arg4;
- (bool)isAnyUnknown;
- (bool)isClose;
- (bool)isEqual:(id)arg1;
- (bool)isMaybeX;
- (bool)isOpen;
- (bool)isOperand;
- (bool)isOperator;
- (bool)isPotentialVariable;
- (bool)isXVariable;
- (bool)loadedNeedsWhitespaceAfter;
- (bool)needsWhitespaceAfter;
- (id)normalizedText;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (id)ranks;
- (void)setCharacterType:(int)arg1;
- (void)setLoadedNeedsWhitespaceAfter:(bool)arg1;
- (void)setNeedsWhitespaceAfter:(bool)arg1;
- (void)setNormalizedText:(id)arg1;
- (void)setRanks:(id)arg1;
- (void)setTokenType:(unsigned long long)arg1;
- (id)text;
- (unsigned long long)tokenType;

@end
