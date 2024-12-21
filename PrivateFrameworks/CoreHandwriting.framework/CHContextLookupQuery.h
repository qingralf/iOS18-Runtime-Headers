/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHContextLookupQuery : CHQuery

- (id)contextLookupResultsAtLocation:(struct CGPoint { double x1; double x2; })arg1 completion:(id /* block */)arg2 shouldCancel:(id /* block */)arg3;
- (id)contextLookupResultsWithSelectedStrokes:(id)arg1 completion:(id /* block */)arg2 shouldCancel:(id /* block */)arg3;
- (id)contextLookupResultsWithSelectionPath:(struct CGPath { }*)arg1 completion:(id /* block */)arg2 shouldCancel:(id /* block */)arg3;
- (id)debugName;
- (id)structuredContextLookupResultsWithSelectedStrokes:(id)arg1 completion:(id /* block */)arg2 shouldCancel:(id /* block */)arg3;
- (id)structuredContextLookupResultsWithSelectionPath:(struct CGPath { }*)arg1 completion:(id /* block */)arg2 shouldCancel:(id /* block */)arg3;

@end