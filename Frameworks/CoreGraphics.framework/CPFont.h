/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreGraphics.framework/CoreGraphics
 */

@interface CPFont : NSObject <CPDisposable> {
    struct CGFont { } * cgFont;
    struct CGPDFFont { } * cgPDFFont;
    double  defaultWidth;
    struct { 
        double fontStretch; 
        double fontWeight; 
        unsigned int flags; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } fontBBox; 
        double italicAngle; 
        double ascent; 
        double descent; 
        double leading; 
        double capHeight; 
        double xHeight; 
        double stemV; 
        double stemH; 
        double avgWidth; 
        double maxWidth; 
        double missingWidth; 
        double spaceWidth; 
        double underlinePosition; 
        double underlineThickness; 
    }  descriptor;
    bool  disposed;
    bool  exactMatch;
    NSString * fontName;
    bool  isHorizontal;
    struct __CFDictionary { } * kernDictionary;
    double  kernUnitsPerEm;
}

- (double)ascent;
- (double)avgWidth;
- (double)capHeight;
- (struct CGFont { }*)cgFont;
- (struct CGPDFFont { }*)cgPDFFont;
- (void)dealloc;
- (double)descent;
- (void)dispose;
- (void)finalize;
- (unsigned int)flags;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })fontBBox;
- (id)fontName;
- (double)fontStretch;
- (double)fontWeight;
- (void)getFontName;
- (bool)getGlyphs:(unsigned short*)arg1 forCodes:(const unsigned short*)arg2 count:(unsigned int)arg3;
- (id)initWith:(struct CGPDFDictionary { }*)arg1;
- (bool)isHorizontal;
- (bool)isSameFontAs:(id)arg1;
- (double)italicAngle;
- (double)kernBetweenUnicode:(unsigned short)arg1 andUnicode:(unsigned short)arg2;
- (double)leading;
- (void)loadEmbeddedFontInfo;
- (void)loadExternalFontInfoFor:(id)arg1;
- (id)matchingFontName;
- (double)maxWidth;
- (double)missingWidth;
- (double)spaceWidth;
- (double)stemH;
- (double)stemV;
- (double)underlinePosition;
- (double)underlineThickness;
- (void)uniCharsFor:(unsigned long long)arg1 count:(unsigned long long*)arg2 toArray:(unsigned short*)arg3 maxChars:(unsigned int)arg4;
- (double)xHeight;

@end
