//See the LICENSE file for details

#ifndef _WIDGETTREE_H_
#define _WIDGETTREE_H_

#include "widget.h"
#include "shape.h"
#include <vector>

class WidgetTree
{

	public:
	class WidgetTreeNode
	{
		public:
		WidgetTreeNode(int xx, int yy, Widget& widget) 
			: _shape(xx,yy), _widget(widget) {}
		virtual ~WidgetTreeNode() {} 
			
		protected:
		Shape _shape;
		Widget _widget;
		int nchildren;
		std::vector<WidgetTreeNode> children;

		public:
		void addTreeNodeRec(WidgetTreeNode& parent, WidgetTreeNode& wtn)
		{
			if (parent.nchildren == 0) {
				parent.children.push_back(wtn);
				parent.nchildren ++;
				return;	
			}

			//FIXME	
		}

	};
	
	public:
	WidgetTree(int x, int y);
	virtual ~WidgetTree();

	public:
	void addTreeNode(WidgetTreeNode& wtn);
	void addTreeNodeRec(WidgetTreeNode& parent, WidgetTreeNode& wtn);

	public:
	int xroot, yroot;
	int nchildren;
	std::vector<WidgetTreeNode> children;
	
};	

#endif
