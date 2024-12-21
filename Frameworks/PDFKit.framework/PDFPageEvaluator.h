/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFPageEvaluator : NSObject {
    bool  _containsLargeImage;
    bool  _containsText;
    struct CGPDFContentStream { } * _contentStream;
    struct CGPDFContentStream { } * _cs;
    struct CGPDFGState { } * _gstate;
    struct CGPDFPage { } * _page;
    unsigned long long  _pageArea;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _pageBounds;
    struct CGPDFRState { } * _rstate;
    bool  _scanned;
    struct CGPDFOperatorTable { } * _table;
}

@property bool containsLargeImage;
@property bool containsText;
@property (readonly) struct CGPDFContentStream { }*contentStream;
@property (readonly) struct CGPDFRState { }*rstate;

+ (id)asyncWorkQueue;
+ (struct CGPDFOperatorTable { }*)createOperatorTable;
+ (bool)isPageCandidateForOCR:(id)arg1;
+ (void)isPageCandidateForOCR:(id)arg1 completion:(id /* block */)arg2;

- (bool)containsLargeImage;
- (bool)containsText;
- (struct CGPDFContentStream { }*)contentStream;
- (void)dealloc;
- (id)initWithPage:(id)arg1;
- (id)initWithParent:(id)arg1;
- (id)initWithParent:(id)arg1 stream:(struct CGPDFStream { }*)arg2 resources:(struct CGPDFDictionary { }*)arg3;
- (bool)isPageCandidateForOCR;
- (void)op_Do:(struct CGPDFScanner { }*)arg1;
- (void)op_Q:(struct CGPDFScanner { }*)arg1;
- (void)op_TJ:(struct CGPDFScanner { }*)arg1;
- (void)op_Tj:(struct CGPDFScanner { }*)arg1;
- (void)op_cm:(struct CGPDFScanner { }*)arg1;
- (void)op_doublequote:(struct CGPDFScanner { }*)arg1;
- (void)op_q:(struct CGPDFScanner { }*)arg1;
- (void)op_singlequote:(struct CGPDFScanner { }*)arg1;
- (struct CGPDFRState { }*)rstate;
- (void)scan;
- (void)setContainsLargeImage:(bool)arg1;
- (void)setContainsText:(bool)arg1;
- (void)stopScan:(struct CGPDFScanner { }*)arg1;

@end