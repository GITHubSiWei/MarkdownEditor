
// LeftView.h : CLeftView ��Ľӿ�
//


#pragma once

class CMarkdownEditorDoc;

class CLeftView : public CRichEditView
{
private:
	CFont _font;
protected: // �������л�����
	CLeftView();
	DECLARE_DYNCREATE(CLeftView)

// ����
public:
	CMarkdownEditorDoc* GetDocument();

// ����
public:

// ��д
	public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual void OnInitialUpdate(); // ������һ�ε���

// ʵ��
public:
	virtual ~CLeftView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChange();
	virtual void OnUpdate(CView* /*pSender*/, LPARAM /*lHint*/, CObject* /*pHint*/);
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
};

#ifndef _DEBUG  // LeftView.cpp �еĵ��԰汾
inline CMarkdownEditorDoc* CLeftView::GetDocument()
   { return reinterpret_cast<CMarkdownEditorDoc*>(m_pDocument); }
#endif

