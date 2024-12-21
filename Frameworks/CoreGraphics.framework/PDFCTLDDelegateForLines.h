/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreGraphics.framework/CoreGraphics
 */

@interface PDFCTLDDelegateForLines : NSObject <CRCTLDDelegate> {
    void * _layout;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _quadToPageTransform;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (long long)groupingConstraintForRegion1:(id)arg1 region2:(id)arg2;
- (id)initWithPageLayout:(void*)arg1 quadToPageTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2;

@end