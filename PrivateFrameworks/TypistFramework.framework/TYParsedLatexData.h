/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TypistFramework.framework/TypistFramework
 */

@interface TYParsedLatexData : NSObject {
    NSArray * _annotatedTextDirections;
    struct CGSize { 
        double width; 
        double height; 
    }  _boundingSize;
    NSString * _convertedString;
    bool  _isLatexString;
    NSArray * _latexFormulaBoundingBoxes;
    double  _offsetY;
    NSString * _string;
}

@property (nonatomic, retain) NSArray *annotatedTextDirections;
@property (nonatomic) struct CGSize { double x1; double x2; } boundingSize;
@property (nonatomic, retain) NSString *convertedString;
@property (nonatomic) bool isLatexString;
@property (nonatomic, retain) NSArray *latexFormulaBoundingBoxes;
@property (nonatomic) double offsetY;
@property (nonatomic, retain) NSString *string;

- (void).cxx_destruct;
- (void)_convertFormula;
- (id)annotatedTextDirections;
- (struct CGSize { double x1; double x2; })boundingSize;
- (id)convertedString;
- (id)initWithString:(id)arg1 isLatex:(bool)arg2;
- (bool)isLatexString;
- (id)latexFormulaBoundingBoxes;
- (double)offsetY;
- (void)setAnnotatedTextDirections:(id)arg1;
- (void)setBoundingSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setConvertedString:(id)arg1;
- (void)setIsLatexString:(bool)arg1;
- (void)setLatexFormulaBoundingBoxes:(id)arg1;
- (void)setOffsetY:(double)arg1;
- (void)setString:(id)arg1;
- (id)string;

@end
