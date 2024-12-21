/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreGraphics.framework/CoreGraphics
 */

@interface PDFAtomicElement : NSObject <PDFCTLDElement> {
    CRNormalizedQuad * _boundingQuad;
    unsigned long long  _layoutDirection;
    PDFCRGroupRegion * _parent;
    unsigned int  _type;
}

@property (readonly) CRNormalizedQuad *boundingQuad;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long layoutDirection;
@property (nonatomic) PDFCRGroupRegion *parent;
@property (readonly) Class superclass;
@property unsigned int type;

- (void).cxx_destruct;
- (id)boundingQuad;
- (id)initWithType:(unsigned int)arg1 boundingBox:(id)arg2 layoutDirection:(unsigned long long)arg3;
- (unsigned long long)layoutDirection;
- (id)parent;
- (void)setBoundingQuad:(id)arg1;
- (void)setParent:(id)arg1;
- (void)setType:(unsigned int)arg1;
- (unsigned int)type;

@end