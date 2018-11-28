
/**
 *
 * @author christian
 */
public class Solver {
    private boolean solvable;
    private int moves;
    private Board[] steps; 
    
    private class SearchNode implements Comparable<SearchNode> {
        private final Board board;
        private final int moves;
        private final SearchNode snode;
        private final int priority;
                
        public SearchNode(Board board, SearchNode predecessor) {            
            this.board = board;
            if (predecessor != null) moves = predecessor.getMoves() + 1;
            else moves = 0;
            snode = predecessor;
            priority = moves + board.manhattan();
        }
        
        public int getMoves() {
            return moves;
        }
        
        public Board getBoard() {
            return board;            
        }
        
        public SearchNode getPredecessor() {
            return snode;
        }
        
        public int getPriority() {
            return priority;
        }

        @Override
        public int compareTo(SearchNode sn) {
            if (priority > sn.getPriority()) {
                return 1;
            }
            if (priority < sn.getPriority()) {
                return -1;
            }
            if (priority == sn.getPriority()) {
                if ((this.priority - this.moves) > (sn.priority - sn.moves)) {
                    return 1;
                } else {
                    return -1;
                }                
            }            
            return 0;
        }
    }
  
    public Solver(Board initial) {
        solvable = false;
        
        MinPQ<SearchNode> minpq = new MinPQ<>();
        MinPQ<SearchNode> twinminpq = new MinPQ<>();
        if (initial == null) throw new java.lang.IllegalArgumentException("Null argument");
        // A* algorithm
        if (initial.isGoal()) {
            solvable = true;
            steps = new Board[1];
            steps[0] = initial;
        } else {
            minpq.insert(new SearchNode(initial, null));
            twinminpq.insert(new SearchNode(initial.twin(), null));
            SearchNode predecessor;
            SearchNode twinpredecessor;
            
            while (true) {
                // doing the A* stuff, you must implement this



            }                     
        }        
    }
    
    public boolean isSolvable() {
        return solvable;
    }
    
    public int moves() {
        return moves;
    }
    
    public Iterable<Board> solution() {
        if (steps == null) return null;
        return Arrays.asList(steps);
    }
    
    
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // code to test our algorithm
        // you must implement this
    }
    
}
