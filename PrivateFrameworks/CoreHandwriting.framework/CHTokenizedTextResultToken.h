/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHTokenizedTextResultToken : CHTokenizedResultToken <NSCopying, NSMutableCopying> {
    double  _alignmentScore;
    double  _combinedScore;
    unsigned long long  _inputSources;
    bool  _isOriginal;
    bool  _isTopOriginal;
    bool  _isTransliterated;
    double  _modelScore;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _originalBounds;
    struct { 
        struct { 
            struct CGPoint { 
                double x; 
                double y; 
            } start; 
            struct CGPoint { 
                double x; 
                double y; 
            } end; 
        } descender; 
        struct { 
            struct CGPoint { 
                double x; 
                double y; 
            } start; 
            struct CGPoint { 
                double x; 
                double y; 
            } end; 
        } base; 
        struct { 
            struct CGPoint { 
                double x; 
                double y; 
            } start; 
            struct CGPoint { 
                double x; 
                double y; 
            } end; 
        } median; 
        struct { 
            struct CGPoint { 
                double x; 
                double y; 
            } start; 
            struct CGPoint { 
                double x; 
                double y; 
            } end; 
        } top; 
    }  _principalLines;
    unsigned long long  _properties;
    double  _recognitionScore;
    NSLocale * _recognizerSourceLocale;
    long long  _substrokeCount;
    unsigned int  _wordID;
}

@property (nonatomic, readonly) double alignmentScore;
@property (nonatomic, readonly) double combinedScore;
@property (nonatomic, readonly) unsigned long long inputSources;
@property (nonatomic, readonly) bool isOriginal;
@property (nonatomic, readonly) bool isTopOriginal;
@property (nonatomic, readonly) bool isTransliterated;
@property (nonatomic, readonly) double modelScore;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } originalBounds;
@property (nonatomic, readonly) struct { struct { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; struct { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; struct { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_4_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_4_1_2; } x4; } principalLines;
@property (nonatomic, readonly) unsigned long long properties;
@property (nonatomic, readonly) double recognitionScore;
@property (nonatomic, readonly, copy) NSLocale *recognizerSourceLocale;
@property (nonatomic, readonly) long long substrokeCount;
@property (nonatomic, readonly) unsigned int wordID;

+ (unsigned long long)makeOriginalToken:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;
+ (id)tokenWithString:(id)arg1 strokeIndexes:(id)arg2 wordID:(unsigned int)arg3 modelScore:(double)arg4 recognitionScore:(double)arg5 combinedScore:(double)arg6 alignmentScore:(double)arg7 properties:(unsigned long long)arg8 recognizerSourceLocale:(id)arg9 inputSources:(unsigned long long)arg10 substrokeCount:(long long)arg11 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg12 originalBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg13 principalLines:(struct { struct { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; struct { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; struct { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_4_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_4_1_2; } x4; })arg14;

- (void).cxx_destruct;
- (double)alignmentScore;
- (double)combinedScore;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasValidPrincipalLines;
- (unsigned long long)hash;
- (double)heuristicTextScore;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1 strokeIndexes:(id)arg2 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)initWithString:(id)arg1 strokeIndexes:(id)arg2 wordID:(unsigned int)arg3 modelScore:(double)arg4 recognitionScore:(double)arg5 combinedScore:(double)arg6 alignmentScore:(double)arg7 properties:(unsigned long long)arg8 recognizerSourceLocale:(id)arg9 inputSources:(unsigned long long)arg10 substrokeCount:(long long)arg11 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg12;
- (id)initWithString:(id)arg1 strokeIndexes:(id)arg2 wordID:(unsigned int)arg3 modelScore:(double)arg4 recognitionScore:(double)arg5 combinedScore:(double)arg6 alignmentScore:(double)arg7 properties:(unsigned long long)arg8 recognizerSourceLocale:(id)arg9 inputSources:(unsigned long long)arg10 substrokeCount:(long long)arg11 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg12 originalBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg13 principalLines:(struct { struct { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; struct { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; struct { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_4_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_4_1_2; } x4; })arg14;
- (unsigned long long)inputSourceModifiersCount;
- (unsigned long long)inputSources;
- (unsigned long long)inputSources;
- (bool)isEqual:(id)arg1;
- (bool)isEquivalentToToken:(id)arg1;
- (bool)isOriginal;
- (bool)isOriginal;
- (bool)isTopOriginal;
- (bool)isTopOriginal;
- (bool)isTransliterated;
- (bool)isTransliterated;
- (double)modelScore;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })originalBounds;
- (struct { struct { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; struct { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; struct { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_4_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_4_1_2; } x4; })principalLines;
- (double)principalOrientation;
- (unsigned long long)properties;
- (double)recognitionScore;
- (id)recognizerSourceLocale;
- (id)recognizerSourceLocale;
- (long long)substrokeCount;
- (unsigned int)wordID;

@end
